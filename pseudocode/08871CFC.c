/* Entry 0x08871CFC | file offset 0x0006ECD4 | FUN_08871cfc | bytes 28 */

bool FUN_08871cfc(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  return (param_1[1] & param_4) != 0 || (*param_1 & param_3) != 0;
}

