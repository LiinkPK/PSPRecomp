/* Entry 0x08906438 | file offset 0x00103410 | FUN_08906438 | bytes 64 */

undefined4 FUN_08906438(int param_1)

{
  if (*(int *)(param_1 + 0xc) != -1) {
    sceNetAdhocPtpClose(*(int *)(param_1 + 0xc),0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return 1;
}

