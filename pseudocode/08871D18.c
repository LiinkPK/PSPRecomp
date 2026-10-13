/* Entry 0x08871D18 | file offset 0x0006ECF0 | FUN_08871d18 | bytes 28 */

bool FUN_08871d18(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  return (*(uint *)(param_1 + 0xc) & param_4) != 0 || (*(uint *)(param_1 + 8) & param_3) != 0;
}

