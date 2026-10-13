/* Entry 0x088BD640 | file offset 0x000BA618 | FUN_088bd640 | bytes 144 */

undefined4 FUN_088bd640(int *param_1,uint param_2)

{
  int iVar1;
  undefined2 local_c [4];
  
  if ((param_1[(param_2 >> 5) + 2] & 1 << (param_2 & 0x1f)) != 0) {
    local_c[0] = (undefined2)param_2;
    iVar1 = FUN_088bd2f0(*param_1,*param_1 + param_1[1] * 8,local_c,0);
    if (iVar1 != 0) {
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return 0;
}

