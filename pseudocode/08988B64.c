/* Entry 0x08988B64 | file offset 0x00185B3C | FUN_08988b64 | bytes 96 */

void FUN_08988b64(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (((*(ushort *)(*(int *)(iVar1 + 0x8c) + 2) & 2) != 0) &&
     (iVar1 = FUN_0894c044(iVar1,*(undefined4 *)(iVar1 + 0x8c),*(undefined4 *)(iVar1 + 0x90)),
     iVar1 == 0)) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  return;
}

