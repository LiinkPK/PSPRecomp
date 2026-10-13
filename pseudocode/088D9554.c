/* Entry 0x088D9554 | file offset 0x000D652C | FUN_088d9554 | bytes 212 */

undefined4
FUN_088d9554(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d93d8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_2 < 0) {
    uVar2 = 0xfffffffe;
  }
  else if (*(uint *)(param_1 + 0x1e0) < 7) {
    FUN_088d8f38(param_1 + *(uint *)(param_1 + 0x1e0) * 0x44 + 4,param_2,param_3,param_4,param_5,
                 param_6);
    uVar2 = 0;
    *(int *)(param_1 + 0x1e0) = *(int *)(param_1 + 0x1e0) + 1;
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

