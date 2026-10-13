/* Entry 0x088F4894 | file offset 0x000F186C | FUN_088f4894 | bytes 108 */

void FUN_088f4894(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  if ((param_1 != 0) && (param_2 < param_3)) {
    puVar3 = (undefined2 *)(param_1 + param_2 * 4);
    puVar2 = (undefined2 *)(param_1 + param_2 * 4);
    do {
      uVar1 = puVar2[3];
      *puVar3 = puVar2[2];
      puVar3[1] = uVar1;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 2;
    } while (param_2 < param_3);
  }
  return;
}

