terminator = '\n';

module.exports = grammar({
  name: 'sciname',

  rules: {
    source_file: ($) => repeat($._sci_name),

    _sci_name: ($) =>
      seq(choice($.uninomial, $.binomial), optional($.tail), terminator),

    uninomial: ($) => choice($._uninomial, seq($.genus, $.subgenus)),

    binomial: ($) =>
      choice(seq($.genus, $.species), seq($.genus, $.subgenus, $.species)),

    genus: ($) => $._uninomial,

    subgenus: ($) => seq('(', $._uninomial, ')'),

    species: ($) => seq($._species, optional($.authorship)),

    authorship: ($) =>
      choice(
        field('orig', $._au_paren),
        field('orig', $._au),
        seq(field('orig', $._au_paren), field('revision', $._au))
      ),

    _au_paren: ($) => seq('(', $.authorship, ')'),

    _au: ($) =>
      seq(
        $.author,
        repeat(seq($.au_delimiter, $.author)),
        optional(','),
        $.year
      ),

    au_delimiter: (_) => choice(',', '&'),

    author: ($) => seq(repeat($.au_initial), $._author),

    au_initial: ($) => seq($._author, optional('.')),

    _author: (_) => /[A-Za-z\-]+/,

    _uninomial: (_) => /[A-Z][a-z]+/,

    _species: (_) => /[a-z]+/,

    year: (_) => /[1-2][0789][0-9][0-9][a-z]?/,

    tail: (_) => token(prec(-1, /.+/)),
  },
});
