((comment) @comment)
((note) @comment.note)

((date) @number.date)
((time) @number.time)
((interval) @number.interval)
((quantity) @number.quantity)

((account) @field.account)
((commodity) @text.literal.commodity)

((check_in) @text.literal.check_in)
(check_in . (date) @number.date.check_in)
(check_in . (date) . (time) @number.time.check_in)
((check_out) @text.literal.check_out)
(check_out . (date) @number.date.check_out)
(check_out . (date) . (time) @number.time.check_out)

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
