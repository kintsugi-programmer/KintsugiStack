# Week 2: Styling with CSS

#### **Objective:**
Learn to style HTML elements using CSS to enhance the appearance of webpages.

---

### **Day 1: Basic CSS Syntax and Selectors**

**Basic CSS Syntax:**
- **CSS (Cascading Style Sheets)** is used to apply styles to HTML elements.
- **Syntax:**
  ```css
  selector {
    property: value;
  }
  ```
  - **Selector:** Targets HTML elements to apply styles.
  - **Property:** Specifies the style attribute (e.g., color, font-size).
  - **Value:** Defines the value of the property.

**Example:**
```css
h1 {
  color: blue;
  text-align: center;
}
```

**Types of Selectors:**
- **Element Selector:** Targets HTML elements by their name.
  ```css
  p {
    font-size: 16px;
  }
  ```
- **Class Selector:** Targets elements with a specific class attribute.
  ```css
  .highlight {
    background-color: yellow;
  }
  ```
  ```html
  <p class="highlight">Highlighted text</p>
  ```
- **ID Selector:** Targets a specific element with a unique ID.
  ```css
  #main-header {
    font-size: 24px;
  }
  ```
  ```html
  <h1 id="main-header">Main Header</h1>
  ```

**Activities:**
- Discuss CSS syntax and selectors.
- Practice creating styles with different selectors.

**Assignment:**
- Create a CSS file to style a basic HTML document with different selectors.

---

### **Day 2: Applying Styles to Text and Backgrounds**

**Styling Text:**
- **Properties:**
  - **`color`:** Sets the text color.
    ```css
    p {
      color: red;
    }
    ```
  - **`font-size`:** Sets the size of the font.
    ```css
    h1 {
      font-size: 36px;
    }
    ```
  - **`font-family`:** Specifies the font type.
    ```css
    body {
      font-family: Arial, sans-serif;
    }
    ```
  - **`text-align`:** Aligns text (left, center, right).
    ```css
    h2 {
      text-align: center;
    }
    ```

**Styling Backgrounds:**
- **Properties:**
  - **`background-color`:** Sets the background color.
    ```css
    .container {
      background-color: lightgray;
    }
    ```
  - **`background-image`:** Sets a background image.
    ```css
    body {
      background-image: url('background.jpg');
    }
    ```
  - **`background-size`:** Defines the size of the background image.
    ```css
    body {
      background-size: cover;
    }
    ```

**Activities:**
- Demonstrate styling text and backgrounds.
- Apply text and background styles to an HTML document.

**Assignment:**
- Style a webpage with different text and background styles, including colors and images.

---

### **Day 3: Working with Colors, Fonts, and Borders**

**Colors:**
- **Color Values:**
  - **Named Colors:** `red`, `blue`, `green`
  - **Hex Codes:** `#FF0000` (red), `#00FF00` (green)
  - **RGB Values:** `rgb(255, 0, 0)` (red)
  - **RGBA Values:** `rgba(255, 0, 0, 0.5)` (red with transparency)

**Fonts:**
- **Font Properties:**
  - **`font-family`:** Defines the font type.
    ```css
    h1 {
      font-family: 'Verdana', sans-serif;
    }
    ```
  - **`font-weight`:** Sets the thickness of the font.
    ```css
    p {
      font-weight: bold;
    }
    ```
  - **`font-style`:** Applies italic or oblique styles.
    ```css
    em {
      font-style: italic;
    }
    ```

**Borders:**
- **Border Properties:**
  - **`border`:** Sets the border of an element.
    ```css
    .box {
      border: 2px solid black;
    }
    ```
  - **`border-radius`:** Rounds the corners of the border.
    ```css
    .rounded {
      border-radius: 10px;
    }
    ```

**Activities:**
- Experiment with colors, fonts, and borders in CSS.
- Apply styles to enhance the appearance of text and elements.

**Assignment:**
- Style a webpage with custom colors, fonts, and borders. Include a variety of styles for different elements.

---

### **Day 4: Layout Techniques**

**Margins and Padding:**
- **Margins:** Space outside the border of an element.
  ```css
  .box {
    margin: 20px;
  }
  ```
- **Padding:** Space inside the border of an element.
  ```css
  .box {
    padding: 15px;
  }
  ```

**Positioning:**
- **`static`:** Default positioning, normal flow.
- **`relative`:** Positioned relative to its normal position.
  ```css
  .relative {
    position: relative;
    top: 10px;
  }
  ```
- **`absolute`:** Positioned relative to the nearest positioned ancestor.
  ```css
  .absolute {
    position: absolute;
    top: 20px;
    right: 20px;
  }
  ```
- **`fixed`:** Positioned relative to the viewport.
  ```css
  .fixed {
    position: fixed;
    bottom: 0;
    left: 0;
  }
  ```
- **`sticky`:** Switches between relative and fixed based on scroll position.
  ```css
  .sticky {
    position: sticky;
    top: 0;
  }
  ```

**Activities:**
- Demonstrate different layout techniques and their effects.
- Apply margin, padding, and positioning styles to layout elements.

**Assignment:**
- Create a layout using margin, padding, and different positioning techniques. Ensure elements are properly aligned and spaced.

---

### **Day 5: Practical Application and Review**

**Review Key Concepts:**
- **CSS Syntax and Selectors:** Understanding how to target and style elements.
- **Text and Background Styles:** Applying color, fonts, and backgrounds.
- **Layout Techniques:** Using margin, padding, and positioning to design layouts.

**Mini-Project: Style the Personal Webpage**
- **Requirements:**
  - Apply various CSS styles to the personal webpage created in Week 1.
  - Include text styles, background colors, fonts, borders, and layout techniques.

**Sample Personal Webpage with CSS Styling:**
```html
<!DOCTYPE html>
<html>
  <head>
    <title>My Stylish Webpage</title>
    <style>
      body {
        font-family: Arial, sans-serif;
        background-color: #f0f0f0;
        color: #333;
      }
      h1 {
        color: #0066cc;
        text-align: center;
      }
      .container {
        margin: 20px auto;
        padding: 20px;
        max-width: 800px;
        background-color: #ffffff;
        border: 1px solid #ddd;
        border-radius: 8px;
      }
      .highlight {
        background-color: #ffff99;
      }
      .link {
        color: #0066cc;
        text-decoration: none;
      }
      .link:hover {
        text-decoration: underline;
      }
    </style>
  </head>
  <body>
    <div class="container">
      <h1>Welcome to My Stylish Webpage</h1>
      <p class="highlight">Hello! I am [Your Name]. Here are some of my interests:</p>
      <ul>
        <li>Reading</li>
        <li>Coding</li>
        <li>Traveling</li>
      </ul>
      <p>Check out my favorite website: <a href="https://www.example.com" class="link">Example</a></p>
      <img src="profile.jpg" alt="My Profile Picture">
    </div>
  </body>
</html>
```

**Resources:**
- **MDN Web Docs:** [CSS Basics](https://developer.mozilla.org/en-US/docs/Web/CSS)
- **W3Schools:** [CSS Tutorial](https://www.w3schools.com/css/)
- **Books:** *"CSS: The Missing Manual"* by David Sawyer McFarland

---
