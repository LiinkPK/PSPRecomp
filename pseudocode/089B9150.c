/* Entry 0x089B9150 | file offset 0x001B6128 | FUN_089b9150 | bytes 256 */

void FUN_089b9150(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_60 [64];
  
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) &&
     (iVar1 = FUN_089b86c4(param_3,param_4,auStack_60), iVar1 != 0)) {
    if ((*(ushort *)(param_3 + 2) & 0x100) == 0) {
      if ((*(ushort *)(param_3 + 2) & 0x200) != 0) {
        uVar2 = (uint)*(ushort *)(param_3 + 0xe);
        if ((uVar2 + 1 & 0xffff0000) == 0) {
          if (*(ushort *)(param_5 + 0x24) <= uVar2) {
            return;
          }
          uVar2 = *(int *)(param_5 + 0x14) + uVar2 * 0x10;
        }
        if (uVar2 != 0) {
          FUN_089b81b4(param_2,uVar2,*(undefined1 *)(param_3 + 0xd),0,auStack_60,iVar1);
        }
      }
    }
    else {
      uVar2 = (uint)*(ushort *)(param_3 + 0xe);
      if ((uVar2 + 1 & 0xffff0000) == 0) {
        if (*(ushort *)(param_5 + 0x20) <= uVar2) {
          return;
        }
        uVar2 = *(int *)(param_5 + 0xc) + uVar2 * 0x100;
      }
      if (uVar2 != 0) {
        FUN_089b83ac(param_2,uVar2,*(undefined1 *)(param_3 + 0xd),0,auStack_60);
      }
    }
  }
  return;
}

