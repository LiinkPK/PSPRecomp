/* Entry 0x08914838 | file offset 0x00111810 | FUN_08914838 | bytes 176 */

void FUN_08914838(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_08933c28(DAT_089d85e8);
  *(undefined1 *)(param_1 + 0x7e9) = 1;
  func_0x08b49cf4(*(undefined4 *)(param_1 + 0x570));
  iVar1 = FUN_088d4c5c();
  FUN_08873d34((float)iVar1,2,0,0,0,2);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_08873db0(&local_20,2);
  FUN_08914bc8(param_1);
  *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) =
       *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) & 0xfffffffd;
  FUN_08914b64(param_1,2);
  return;
}

