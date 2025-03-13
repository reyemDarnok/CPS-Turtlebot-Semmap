#!/usr/bin/env python3
from pathlib import Path

from ultralytics import YOLO

model = YOLO("yolo11n.pt")  # load a pretrained model (recommended for training)

results = model.train(data=(Path(__file__).parent / "training.yaml").absolute().__str__(), epochs=100, imgsz=640)

model.save("trained.pt")