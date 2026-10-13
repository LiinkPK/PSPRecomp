/* Entry 0x08850FAC | file offset 0x0004DF84 | FUN_08850fac | bytes 20 */

void FUN_08850fac(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x5f4) = param_2;
  *(undefined2 *)(param_1 + 0x5f6) = param_3;
  *(undefined1 *)(param_1 + 0x60e) = 1;
  return;
}

