/* Entry 0x08806B94 | file offset 0x00003B6C | FUN_08806b94 | bytes 248 */

void FUN_08806b94(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = 0;
  while (iVar2 = FUN_088cb8c8(param_2,&local_10), iVar2 != 0) {
    uVar1 = *(ushort *)(iVar2 + 2);
    if ((uVar1 & 4) != 0) {
      *(int *)(param_1 + 4) = iVar2;
      uVar1 = *(ushort *)(iVar2 + 2);
    }
    if ((uVar1 & 8) != 0) {
      *(int *)(param_1 + 8) = iVar2;
      uVar1 = *(ushort *)(iVar2 + 2);
    }
    if ((uVar1 & 0x10) != 0) {
      *(int *)(param_1 + 0xc) = iVar2;
      uVar1 = *(ushort *)(iVar2 + 2);
    }
    if ((uVar1 & 0x20) != 0) {
      *(int *)(param_1 + 0x10) = iVar2;
      uVar1 = *(ushort *)(iVar2 + 2);
    }
    if ((uVar1 & 0x40) != 0) {
      *(int *)(param_1 + 0x14) = iVar2;
      uVar1 = *(ushort *)(iVar2 + 2);
    }
    if ((uVar1 & 0x80) != 0) {
      *(int *)(param_1 + 0x18) = iVar2;
    }
  }
  return;
}

