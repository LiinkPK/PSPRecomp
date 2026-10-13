/* Entry 0x088D4E00 | file offset 0x000D1DD8 | FUN_088d4e00 | bytes 196 */

void FUN_088d4e00(uint param_1,uint *param_2)

{
  uint uVar1;
  
  if ((*param_2 & 1) == 0) {
    uVar1 = param_2[1];
    if (uVar1 != param_1) {
      if (((uVar1 != 0xffffffff) && (param_1 == 0xffffffff)) && (param_2[4] != 0)) {
        FUN_088d9f5c(param_2[4],*(undefined2 *)(param_2[9] + uVar1 * 0x1e + 4),1);
      }
      param_2[2] = param_1;
      *param_2 = *param_2 | 1;
    }
  }
  else if (param_2[2] != param_1) {
    param_2[2] = param_1;
  }
  return;
}

