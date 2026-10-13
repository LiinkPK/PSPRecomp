/* Entry 0x088D72E8 | file offset 0x000D42C0 | FUN_088d72e8 | bytes 204 */

undefined4
FUN_088d72e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d723c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if (param_2 < 0) {
    uVar2 = 0xfffffffe;
  }
  else if ((*(int *)(param_1 + 0x10) == 1) || (*(int *)(param_1 + 0x10) == 2)) {
    FUN_088d9554(param_1 + 0x5c,param_2,param_3,param_4,param_5,param_6);
    *(undefined4 *)(param_1 + 0x10) = 2;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

