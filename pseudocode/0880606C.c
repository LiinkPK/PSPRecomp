/* Entry 0x0880606C | file offset 0x00003044 | FUN_0880606c | bytes 68 */

void FUN_0880606c(undefined4 param_1,int param_2)

{
  FUN_089a3868(param_2 + 0x560);
  *(undefined4 *)(param_2 + 0x570) = param_1;
  *(uint *)(param_2 + 0x580) = *(uint *)(param_2 + 0x580) | 1;
  return;
}

