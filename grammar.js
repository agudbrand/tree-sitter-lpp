/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar(
{
  name: 'lpp',

  externals: $ =>
  [
    $.lua_line,
    $.lua_inline,
    $.lua_block,

    $.macro_symbol,
    $.macro_identifier,
    $.macro_tuple_arg,
    $.macro_string_arg,

    $.document,

    $.dollar_sign,
  ],

  rules:
  {
    source_file: $ => repeat(choice(
      $.lua_block,
      $.lua_line,
      $.macro_symbol,
      $.document,
    )),
  }
})
