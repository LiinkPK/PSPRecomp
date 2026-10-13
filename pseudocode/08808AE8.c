/* Entry 0x08808AE8 | file offset 0x00005AC0 | FUN_08808ae8 | bytes 432 */

bool FUN_08808ae8(int param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = false;
  iVar1 = FUN_088378c4(param_3);
  if (iVar1 == 0) {
    iVar1 = 0;
    iVar2 = FUN_08807a00(0x80);
    if (iVar2 != 0) {
      FUN_08807860(iVar2,param_1,param_1,param_2,0xffffffff);
      iVar1 = iVar2;
    }
    if (param_5 == '\0') {
      iVar2 = (**(code **)(*(int *)(iVar1 + 0x70) + 0x34))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 0x70) + 0x30),param_3,0);
    }
    else {
      iVar2 = FUN_08807e6c(iVar1,param_3,*(undefined4 *)(iVar1 + 0x34),0,1);
    }
    if (param_1 == 0) {
      FUN_08808748(0,param_3,0,iVar2,param_3 + 0x100);
    }
    else {
      FUN_08808748(param_1,param_3,param_1,iVar2,param_3 + 0x100);
    }
    if (iVar2 != 0) {
      bVar3 = (*(uint *)(iVar2 + 0x28) & 1) == 0;
      FUN_089a3868(iVar2,param_4);
      FUN_089a3868(iVar2 + 0x10,param_4);
      (**(code **)(*(int *)(param_3 + 0x544) + 0x74))
                (param_3 + *(short *)(*(int *)(param_3 + 0x544) + 0x70),iVar2);
      FUN_08813180(iVar2);
    }
    FUN_08808214(iVar1);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

