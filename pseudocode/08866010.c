/* Entry 0x08866010 | file offset 0x00062FE8 | FUN_08866010 | bytes 44 */

void FUN_08866010(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 0x8bc) =
       (((param_4 & 0xff) + 0xff00) * 0x100 + (param_3 & 0xff)) * 0x100 + (param_2 & 0xff);
  return;
}

