# HTML Tutorial Documentation

## 1. Introduction to HTML

HTML (HyperText Markup Language) is the standard markup language for creating web pages. It describes the structure of a web page using a series of elements.

## 2. Basic Structure of an HTML Document

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document Title</title>
</head>
<body>
    <!-- Content goes here -->
</body>
</html>
```

- `<!DOCTYPE html>`: Defines the document type as HTML5
- `<html>`: The root element of an HTML page
- `<head>`: Contains meta information about the document
- `<body>`: Defines the document's body, which contains all the visible contents

## 3. HTML Elements

### 3.1 Headings
HTML offers six levels of headings:
```html
<h1>Heading 1</h1>
<h2>Heading 2</h2>
<h3>Heading 3</h3>
<h4>Heading 4</h4>
<h5>Heading 5</h5>
<h6>Heading 6</h6>
```

### 3.2 Paragraphs
```html
<p>This is a paragraph.</p>
```

### 3.3 Line Breaks
```html
<br>
```

### 3.4 Horizontal Rule
```html
<hr>
```

### 3.5 Text Formatting
```html
<b>Bold text</b>
<i>Italic text</i>
<u>Underlined text</u>
<s>Strikethrough text</s>
<big>Larger text</big>
<small>Smaller text</small>
```

### 3.6 Superscript and Subscript
```html
H<sub>2</sub>O
x<sup>2</sup>
```

## 4. Links and Images

### 4.1 Links
```html
<a href="https://www.example.com">Link Text</a>
```

### 4.2 Images
```html
<img src="image.jpg" alt="Description of image" width="300" height="200">
```

## 5. Lists

### 5.1 Unordered Lists
```html
<ul>
    <li>Item 1</li>
    <li>Item 2</li>
    <li>Item 3</li>
</ul>
```

### 5.2 Ordered Lists
```html
<ol>
    <li>First item</li>
    <li>Second item</li>
    <li>Third item</li>
</ol>
```

### 5.3 Definition Lists
```html
<dl>
    <dt>Term 1</dt>
    <dd>Definition 1</dd>
    <dt>Term 2</dt>
    <dd>Definition 2</dd>
</dl>
```

## 6. Tables
```html
<table border="1">
    <caption>Table Caption</caption>
    <tr>
        <th>Header 1</th>
        <th>Header 2</th>
    </tr>
    <tr>
        <td>Row 1, Cell 1</td>
        <td>Row 1, Cell 2</td>
    </tr>
</table>
```

## 7. Forms
```html
<form action="submit.php" method="post">
    <label for="name">Name:</label>
    <input type="text" id="name" name="name"><br>
    
    <label for="email">Email:</label>
    <input type="email" id="email" name="email"><br>
    
    <input type="submit" value="Submit">
</form>
```

### 7.1 Form Elements
- Text input: `<input type="text">`
- Password input: `<input type="password">`
- Radio buttons: `<input type="radio">`
- Checkboxes: `<input type="checkbox">`
- Dropdown lists: `<select>` and `<option>`
- Text area: `<textarea>`
- Submit button: `<input type="submit">`

## 8. Semantic HTML
Semantic elements describe their meaning in a human- and machine-readable way.

```html
<header>
<nav>
<main>
<article>
<section>
<aside>
<footer>
```

## 9. Multimedia
```html
<video src="movie.mp4" controls width="320" height="240"></video>
<audio src="sound.mp3" controls></audio>
```

## 10. Iframes
```html
<iframe src="https://www.example.com" width="500" height="300"></iframe>
```

## 11. Comments
```html
<!-- This is a comment -->
```

Remember, this is just a basic introduction to HTML. There are many more elements and attributes to explore as you continue learning web development.