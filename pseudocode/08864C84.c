/* Entry 0x08864C84 | file offset 0x00061C5C | FUN_08864c84 | bytes 44 */

void FUN_08864c84(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 8) =
       (((param_4 & 0xff) + 0xff00) * 0x100 + (param_3 & 0xff)) * 0x100 + (param_2 & 0xff);
  return;
}

