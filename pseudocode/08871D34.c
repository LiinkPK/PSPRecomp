/* Entry 0x08871D34 | file offset 0x0006ED0C | FUN_08871d34 | bytes 28 */

bool FUN_08871d34(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  return (*(uint *)(param_1 + 0x14) & param_4) != 0 || (*(uint *)(param_1 + 0x10) & param_3) != 0;
}

