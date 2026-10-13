/* Entry 0x0882FE7C | file offset 0x0002CE54 | FUN_0882fe7c | bytes 328 */

undefined4
FUN_0882fe7c(undefined4 param_1,undefined4 param_2,int param_3,undefined1 param_4,undefined1 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(int *)(param_3 + 0x94) == 0) {
    uVar2 = 1;
  }
  else {
    uVar3 = 0;
    uVar2 = 0;
    iVar4 = 0;
    iVar1 = FUN_0883739c(*(undefined4 *)(param_3 + 0x30));
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_3 + 0x30);
      if (*(char *)(iVar1 + 0x542) == '\x01') {
        uVar3 = 6;
        iVar4 = (int)*(char *)(iVar1 + 0xd60);
      }
      else if (((*(byte *)(iVar1 + 0x5b2) & 4) == 0) || (iVar4 = func_0x08b3406c(iVar1), iVar4 != 0)
              ) {
        uVar3 = 1;
        iVar4 = (int)*(char *)(iVar1 + 0xd60);
      }
      else {
        uVar3 = 2;
        iVar4 = (int)*(char *)(iVar1 + 0xd60);
        if ((*(byte *)(iVar1 + 0x5b6) & 0x40) != 0) {
          uVar2 = 1;
        }
      }
    }
    uVar2 = FUN_0882e764(param_1,param_2,*(undefined4 *)(param_3 + 0x94),uVar3,uVar2,iVar4,param_3,
                         param_4,param_5);
  }
  return uVar2;
}

