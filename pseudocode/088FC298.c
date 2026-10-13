/* Entry 0x088FC298 | file offset 0x000F9270 | FUN_088fc298 | bytes 68 */

void FUN_088fc298(int param_1)

{
  **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) | 1;
  FUN_088d3b88(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089cce20,0,
               0x120);
  return;
}

