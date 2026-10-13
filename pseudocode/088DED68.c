/* Entry 0x088DED68 | file offset 0x000DBD40 | FUN_088ded68 | bytes 152 */

undefined4 FUN_088ded68(undefined1 *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  
  FUN_088ded28();
  if ((((param_2 == 0) || (param_3 == 0)) || (param_4 == 0)) || (1 < param_5)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(param_1 + 8) = param_2;
    *(int *)(param_1 + 0xc) = param_3;
    *(int *)(param_1 + 0x10) = param_4;
    *(uint *)(param_1 + 0x14) = param_5;
    *param_1 = 1;
    uVar1 = 0;
  }
  return uVar1;
}

