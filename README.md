```
tree-sitter generate

echo '(let [foo 123] (foo bar))' > example-file
tree-sitter parse example-file
```
