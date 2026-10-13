/* Entry 0x08823A74 | file offset 0x00020A4C | FUN_08823a74 | bytes 48 */

undefined4 FUN_08823a74(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x24) + 0x568) + 0x34);
  if (('\0' < *(char *)(param_1 + 0x31)) && (*(char *)(param_1 + 0x31) < '\x05')) {
    uVar1 = 0;
  }
  return uVar1;
}

