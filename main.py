from fastapi import *
import uvicorn

app = FastAPI()

@app.get("/mirror/")
def mirror_text(a: int, b:int):
    #............................
    return a+b

if __name__ == "__main__":
    uvicorn.run(app)