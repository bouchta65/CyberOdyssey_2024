from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def home():
    return render_template('home.html')

@app.route('/flag')
def flag():
    return "AKASEC{Fl4g_1s_4w3s0m3!}"

if __name__ == '__main__':
    app.run()