/* Entry 0x088DF43C | file offset 0x000DC414 | FUN_088df43c | bytes 92 */

undefined4 FUN_088df43c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088df2b8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 4) == 1) {
      *(undefined4 *)(param_1 + 8) = 2;
      *(undefined4 *)(param_1 + 4) = 2;
    }
    uVar2 = 0;
  }
  return uVar2;
}

