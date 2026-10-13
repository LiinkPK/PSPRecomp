/* Entry 0x088FC220 | file offset 0x000F91F8 | FUN_088fc220 | bytes 120 */

void FUN_088fc220(int param_1)

{
  **(uint **)(param_1 + 0x30) = **(uint **)(param_1 + 0x30) & 0xfffffffd;
  FUN_088d3ea0(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089cce9c);
  FUN_088d3c24(*(int *)(param_1 + 0x30) + 0x65c,*(int *)(param_1 + 0x30) + 0xa5c,&DAT_089cce38,0x120
              );
  FUN_088fbc08(param_1);
  FUN_088fbf8c(param_1);
  return;
}

