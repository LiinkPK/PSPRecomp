/* Entry 0x089C02D8 | file offset 0x001BD2B0 | FUN_089c02d8 | bytes 52 */

undefined2 * FUN_089c02d8(undefined2 *param_1,undefined2 *param_2)

{
  if (((uint)param_1 & 1) == 0) {
    *param_2 = *param_1;
    return param_1 + 1;
  }
  *param_2 = *param_1;
  return param_1 + 1;
}

