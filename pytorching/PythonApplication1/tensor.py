import torch
import numpy as np
#from https://tutorials.pytorch.kr/beginner/basics/tensorqs_tutorial.html

if torch.cuda.is_available():
    tensor = tensor.to("cuda")

#tensor initialization
print(f"TENSOR INIT\n")
data = [[1, 2],[3, 4]]
x_data = torch.tensor(data)
#numpy style
np_array = np.array(data)
x_np = torch.from_numpy(np_array)

x_ones = torch.ones_like(x_data) # x_data의 속성을 유지합니다.
print(f"Ones Tensor: \n {x_ones} \n")

x_rand = torch.rand_like(x_data, dtype=torch.float) # x_data의 속성을 덮어씁니다.
print(f"Random Tensor: \n {x_rand} \n\n")

#using random,constant type
print(f"RANDOM, CONSTANT\n")
shape = (2,3,)
rand_tensor = torch.rand(shape)
ones_tensor = torch.ones(shape)
zeros_tensor = torch.zeros(shape)

print(f"Random Tensor: \n {rand_tensor} \n")
print(f"Ones Tensor: \n {ones_tensor} \n")
print(f"Zeros Tensor: \n {zeros_tensor}\n\n")

#tensor attributes
print(f"TENSOR ATTRIBUTE\n")
tensor = torch.rand(3,4)

print(f"Shape of tensor: {tensor.shape}")
print(f"Datatype of tensor: {tensor.dtype}")
print(f"Device tensor is stored on: {tensor.device}\n\n")

#indexing slicing
print(f"INDEXING, SLICING\n")
tensor = torch.ones(4, 4)
print(f"First row: {tensor[0]}")
print(f"First column: {tensor[:, 0]}")
print(f"Last column: {tensor[..., -1]}")
tensor[:,1] = 0
print(tensor)
print(f"\n\n")

#torch concatenation
print(f"CONCATENATE\n")
t1 = torch.cat([tensor, tensor, tensor], dim=1)
print(t1)
print(f"\n\n")

#arithmetic operations
print(f"ARITHMETIC OPERATIONS\n")
# 두 텐서 간의 행렬 곱(matrix multiplication)을 계산합니다. y1, y2, y3은 모두 같은 값을 갖습니다.
y1 = tensor @ tensor.T
y2 = tensor.matmul(tensor.T)

y3 = torch.rand_like(y1)
torch.matmul(tensor, tensor.T, out=y3)


# 요소별 곱(element-wise product)을 계산합니다. z1, z2, z3는 모두 같은 값을 갖습니다.
z1 = tensor * tensor
z2 = tensor.mul(tensor)

z3 = torch.rand_like(tensor)
torch.mul(tensor, tensor, out=z3)

agg = tensor.sum()
agg_item = agg.item()
print(agg_item, type(agg_item))
print(f"\n\n")

#바꿔치기
print(f"IN-PLACE\n")
print(f"{tensor} \n")
tensor.add_(5)
print(tensor)
print(f"\n\n")

#numpy 변환
print(f"NUMPY BRIDGE\n")
t = torch.ones(5)
print(f"t: {t}")
n = t.numpy()
print(f"n: {n}")

n = np.ones(5)
t = torch.from_numpy(n)

np.add(n, 1, out=n)
print(f"t: {t}")
print(f"n: {n}")
print(f"\n\n")