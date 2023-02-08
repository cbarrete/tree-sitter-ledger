((comment) @comment)
((note) @comment.note)

((date) @number.date)
((interval) @number.interval)
((quantity) @number.quantity)

((account) @field.account)
((commodity) @text.literal.commodity)

"include" @include

[
    "account"
    "alias"
    "assert"
    "check"
    "commodity"
    "def"
    "default"
    "end"
    "eval"
    "format"
    "nomarket"
    "note"
    "payee"
    "A"
    "Y"
    "N"
    "D"
    "C"
    "P"
] @keyword
