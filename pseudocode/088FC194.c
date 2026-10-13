/* Entry 0x088FC194 | file offset 0x000F916C | FUN_088fc194 | bytes 140 */

void FUN_088fc194(int param_1)

{
  **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) | 2;
  FUN_088d3b88(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089cce38,0,
               0x120);
  FUN_088d3cf0(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089cce9c);
  if (*(short *)(*(int *)(param_1 + 0x30) + 0x12) == 1) {
    FUN_088d9f5c(*(undefined4 *)(*(int *)(param_1 + 0x30) + 0xa64),0,1);
  }
  return;
}

