/* Entry 0x08871D50 | file offset 0x0006ED28 | FUN_08871d50 | bytes 28 */

bool FUN_08871d50(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  return (*(uint *)(param_1 + 0x1c) & param_4) != 0 || (*(uint *)(param_1 + 0x18) & param_3) != 0;
}

