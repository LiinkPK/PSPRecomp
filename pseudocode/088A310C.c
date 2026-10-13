/* Entry 0x088A310C | file offset 0x000A00E4 | FUN_088a310c | bytes 124 */

bool FUN_088a310c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088a16b0(0,0x3f800000,DAT_089d6c88,*(undefined4 *)(param_1 + 4),
                       *(undefined4 *)(param_1 + 0xc),&LAB_088a3264,param_1);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 == -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  }
  else {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
  }
  return iVar1 != -1;
}

