/* Entry 0x08806108 | file offset 0x000030E0 | FUN_08806108 | bytes 20 */

void FUN_08806108(undefined4 param_1,int param_2)

{
  *(undefined4 *)(param_2 + 0x574) = param_1;
  *(uint *)(param_2 + 0x580) = *(uint *)(param_2 + 0x580) | 2;
  return;
}

