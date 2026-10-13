/* Entry 0x0886465C | file offset 0x00061634 | FUN_0886465c | bytes 260 */

int FUN_0886465c(undefined4 *param_1,undefined4 param_2,code *param_3,undefined4 param_4,
                char param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_5 == '\x01') {
    uVar2 = 0x40000001;
  }
  do {
    FUN_08864b68(param_1,0x82);
    iVar1 = sceIoOpenAsync(param_2,uVar2,0);
    if (-1 < iVar1) {
      param_1[5] = param_3;
      param_1[6] = param_4;
      param_1[8] = 1;
      *(undefined1 *)(param_1 + 0x52) = 0;
      *(char *)((int)param_1 + 0x149) = param_5;
      FUN_089359a4(param_1 + 0x12,param_2);
      sceIoSetAsyncCallback(iVar1,*param_1,iVar1);
      return iVar1;
    }
  } while (param_5 != '\x01');
  if (param_3 != (code *)0x0) {
    (*param_3)(iVar1,param_4);
  }
  return iVar1;
}

