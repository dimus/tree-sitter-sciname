terminator = '\n';

module.exports = grammar({
  name: 'sciname',

  rules: {
    source_file: ($) => repeat($._sci_name),

    _sci_name: ($) =>
      seq(
        choice($.uninomial, $.multinomial, $.binomial),
        optional($.tail),
        terminator
      ),

    uninomial: ($) => choice($._uninomial, seq($.genus, $.subgenus)),

    binomial: ($) => $._binomial,

    _binomial: ($) =>
      choice(seq($.genus, $.species), seq($.genus, $.subgenus, $.species)),

    multinomial: ($) => seq($._binomial, repeat1($._infraspecies)),

    genus: ($) => $._uninomial,

    subgenus: ($) => seq('(', $._uninomial, ')'),

    species: ($) => seq(field('sp', $._sp_epithet), optional($.authorship)),

    _infraspecies: ($) =>
      seq(optional($.rank), $.infraspecies, optional($.authorship)),

    infraspecies: ($) => $._sp_epithet,

    rank: ($) => choice($._rank_ssp, $._rank_forma, $._rank_var),

    _rank_var: (_) => /variety|\[var\.\]|var\.?/,

    _rank_forma: (_) => /forma|(fma|fm|form|fo|f)\.?/,

    _rank_ssp: (_) => /(subspec|subsp|ssp)\.?/,

    authorship: ($) =>
      choice(
        field('orig', $.authors_paren),
        field('orig', $.authors),
        seq(field('orig', $.authors_paren), field('revision', $.authors))
      ),

    authors_paren: ($) => seq('(', $.authorship, ')'),

    authors: ($) =>
      seq(
        $.author,
        repeat(seq($.au_delimiter, $.author)),
        optional(','),
        $.year
      ),

    au_delimiter: (_) => choice(',', '&'),

    author: ($) => seq(repeat($.au_initial), $._author),

    au_initial: ($) => seq($._author, optional('.')),

    _author: (_) => /[A-Z][A-Za-z\-]+/,

    _uninomial: (_) => /[A-Z][a-z]+/,

    _sp_epithet: (_) => /[a-z]+/,

    year: (_) => /[1-2][0789][0-9][0-9][a-z]?/,

    tail: (_) => token(prec(-1, /.+/)),
  },
});
