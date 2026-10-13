/* Entry 0x0892BC48 | file offset 0x00128C20 | FUN_0892bc48 | bytes 156 */

void FUN_0892bc48(int param_1)

{
  FUN_0892b084(param_1 + *(int *)(param_1 + 0x198) * 0x44 + 0x44);
  FUN_0892b238(param_1 + *(int *)(param_1 + 0x198) * 0x44 + 0x44,*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x30),
               *(undefined4 *)(param_1 + 0x3c),
               *(undefined2 *)(&DAT_089cece0 + *(int *)(param_1 + 0x198) * 0xc));
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  return;
}

