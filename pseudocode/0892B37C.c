/* Entry 0x0892B37C | file offset 0x00128354 | FUN_0892b37c | bytes 376 */

void FUN_0892b37c(float param_1,int param_2,char param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined4 **)(param_2 + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    uVar3 = *puVar1;
    if (20.0 < param_1) {
      FUN_088d9f5c(puVar1,3,1);
      FUN_088d9aec(uVar3,*(undefined4 *)(param_2 + 0x18));
      FUN_088d9f08(param_1,*(undefined4 *)(param_2 + 0x18));
    }
    else {
      FUN_088d9f5c(puVar1,2,1);
      FUN_088d9aec(uVar3,*(undefined4 *)(param_2 + 0x18));
      FUN_088d9f08(param_1,*(undefined4 *)(param_2 + 0x18));
    }
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 != 0) {
    if (20.0 < param_1) {
      FUN_088d9f5c(iVar2,4,1);
    }
    else {
      FUN_088d9f5c(iVar2,5,1);
    }
  }
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 0) {
    if (param_3 == '\0') {
      FUN_088d9f5c(iVar2,0,1);
    }
    else {
      FUN_088d9f5c(iVar2,1,1);
    }
  }
  FUN_0892b7a4(param_2);
  FUN_0892b600(param_2,param_4,param_5,param_6,param_7);
  return;
}

