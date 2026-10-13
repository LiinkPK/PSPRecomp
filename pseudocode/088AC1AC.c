/* Entry 0x088AC1AC | file offset 0x000A9184 | FUN_088ac1ac | bytes 188 */

void FUN_088ac1ac(int param_1,int param_2,char param_3)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xefd) == '\0') {
    FUN_088ab9f8(param_1);
    FUN_088f1b8c();
    if (param_3 == '\0') {
      uVar1 = *(uint *)(param_1 + 0x3f5fc) & 0xfffffffe;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x3f5fc) | 1;
    }
    *(uint *)(param_1 + 0x3f5fc) = uVar1;
  }
  *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xffffffdf;
  *(int *)(param_1 + 0x210) = param_2;
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  if (param_2 == 5) {
    *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffffffd;
  }
  FUN_088ac034(param_1,param_2);
  FUN_088ac07c(param_1,1);
  return;
}

