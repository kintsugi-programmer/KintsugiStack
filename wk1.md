# Week 1: Introduction to HTML

---

#### **Overview:**

**HTML (Hypertext Markup Language)** is the standard language used to create and design web pages. It provides the structure for web content by using various tags and elements.

---

### **Day 1: Introduction to HTML**

**What is HTML?**
- **Definition:** HTML is a markup language used to create the structure of web pages. It uses "tags" to define elements within a page.
- **Purpose:** To provide a framework for presenting content on the web, including text, images, and links.

**Basic HTML Document Structure:**
```html
<!DOCTYPE html>
<html>
  <head>
    <title>Page Title</title>
  </head>
  <body>
    <h1>This is a Heading</h1>
    <p>This is a paragraph.</p>
  </body>
</html>
```
- **`<!DOCTYPE html>`:** Declaration defining the document type and version of HTML.
- **`<html>`:** Root element of an HTML document.
- **`<head>`:** Contains meta-information about the document (e.g., title, character encoding).
- **`<title>`:** Sets the title of the document, shown in the browser’s title bar or tab.
- **`<body>`:** Contains the content of the HTML document.

---

### **Day 2: HTML Document Structure**

**Essential HTML Tags:**

- **`<html>`:** The root element that contains all other elements.
- **`<head>`:** Contains metadata, links to stylesheets, and other non-visible information.
- **`<title>`:** Sets the title of the document.
- **`<body>`:** Contains visible content of the webpage.

**Basic HTML Tags:**
```html
<h1>This is a Heading 1</h1>
<p>This is a paragraph.</p>
```
- **`<h1>` to `<h6>`:** Heading tags, `<h1>` is the largest, `<h6>` is the smallest.
- **`<p>`:** Defines a paragraph.

---

### **Day 3: Common HTML Tags**

**Text Formatting Tags:**
- **`<b>`:** Bold text.
- **`<i>`:** Italic text.
- **`<u>`:** Underlined text.
- **`<strong>`:** Important text (bold).
- **`<em>`:** Emphasized text (italic).

**Lists:**
- **Unordered List:**
  ```html
  <ul>
    <li>Item 1</li>
    <li>Item 2</li>
  </ul>
  ```
- **Ordered List:**
  ```html
  <ol>
    <li>First item</li>
    <li>Second item</li>
  </ol>
  ```

**Links and Images:**
- **Link:**
  ```html
  <a href="https://www.example.com">Visit Example</a>
  ```
- **Image:**
  ```html
  <img src="image.jpg" alt="Description of image">
  ```

**Attributes:**
- **`href`**: Specifies the URL in the `<a>` tag.
- **`src`**: Specifies the image file in the `<img>` tag.
- **`alt`**: Provides alternative text for images.

---

### **Day 4: HTML Attributes and Forms**

**HTML Attributes:**
- **`id`**: Specifies a unique identifier for an element.
- **`class`**: Specifies one or more class names for an element.
- **`style`**: Applies inline CSS styles to an element.

**Example:**
```html
<p id="para1" class="text" style="color:blue;">Styled paragraph</p>
```

**HTML Forms:**
```html
<form action="/submit" method="post">
  <label for="name">Name:</label>
  <input type="text" id="name" name="name">
  
  <label for="email">Email:</label>
  <input type="email" id="email" name="email">
  
  <label for="message">Message:</label>
  <textarea id="message" name="message"></textarea>
  
  <button type="submit">Submit</button>
</form>
```
- **`action`**: URL where the form data will be sent.
- **`method`**: HTTP method to use (e.g., `post`).
- **`input`**: Various types of form inputs (text, email, etc.).
- **`textarea`**: Multi-line text input.
- **`button`**: Button to submit the form.

---

### **Day 5: Practical Application and Review**

**Review Key Concepts:**
- **HTML Document Structure:** Understanding the basic layout.
- **Common Tags and Attributes:** Applying tags for text formatting, lists, links, and images.
- **Forms:** Using form elements for user input.

**Mini-Project: Create a Personal Webpage**
- **Requirements:**
  - Include a heading, paragraph, list of interests, a link to a favorite website, and an image.
  - Use attributes for styling and identification.

**Sample Personal Webpage:**
```html
<!DOCTYPE html>
<html>
  <head>
    <title>My Personal Webpage</title>
  </head>
  <body>
    <h1>Welcome to My Webpage</h1>
    <p>Hello! I am [Your Name]. Here are some of my interests:</p>
    <ul>
      <li>Reading</li>
      <li>Coding</li>
      <li>Traveling</li>
    </ul>
    <p>Check out my favorite website: <a href="https://www.example.com">Example</a></p>
    <img src="profile.jpg" alt="My Profile Picture">
  </body>
</html>
```

---

### **Resources**

- **MDN Web Docs:** [HTML Basics](https://developer.mozilla.org/en-US/docs/Web/HTML)
- **W3Schools:** [HTML Tutorial](https://www.w3schools.com/html/)
