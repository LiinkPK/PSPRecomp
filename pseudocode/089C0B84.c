/* Entry 0x089C0B84 | file offset 0x001BDB5C | FUN_089c0b84 | bytes 52 */

undefined2 * FUN_089c0b84(undefined2 *param_1,undefined2 *param_2)

{
  if (((uint)param_1 & 1) == 0) {
    *param_2 = *param_1;
    return param_1 + 1;
  }
  *param_2 = *param_1;
  return param_1 + 1;
}

