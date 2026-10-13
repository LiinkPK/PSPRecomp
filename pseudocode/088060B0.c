/* Entry 0x088060B0 | file offset 0x00003088 | FUN_088060b0 | bytes 72 */

void FUN_088060b0(int param_1)

{
  *(uint *)(param_1 + 0x580) = *(uint *)(param_1 + 0x580) & 0xfffffffe;
  FUN_089a3868(param_1 + 0x560,&DAT_09af84c0);
  *(undefined4 *)(param_1 + 0x570) = 0;
  return;
}

