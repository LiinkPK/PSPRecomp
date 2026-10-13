/* Entry 0x088DF330 | file offset 0x000DC308 | FUN_088df330 | bytes 136 */

undefined4 FUN_088df330(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088df2b8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if ((param_2 == 0) || (1 < param_3)) {
    uVar2 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 8) = 0;
    *(uint *)(param_1 + 0xc) = param_3;
    *(int *)(param_1 + 0x10) = param_2;
    *(undefined1 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 4) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

