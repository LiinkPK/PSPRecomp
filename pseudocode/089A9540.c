/* Entry 0x089A9540 | file offset 0x001A6518 | FUN_089a9540 | bytes 196 */

uint FUN_089a9540(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0xffffffff;
  if ((code *)param_1[4] != (code *)0x0) {
    uVar2 = (*(code *)param_1[4])(param_1[2],param_2,param_3 << 2);
  }
  iVar4 = (int)uVar2 >> 0x1f;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    iVar1 = 0x7fffffff - param_1[1];
    uVar3 = 0x80660000;
    if ((iVar4 <= iVar1) && ((iVar4 != iVar1 || (uVar2 <= -*param_1 - 1)))) {
      uVar3 = *param_1 + uVar2;
      *param_1 = uVar3;
      param_1[1] = param_1[1] + iVar4 + (uint)(uVar3 < uVar2);
      uVar3 = uVar2;
    }
  }
  return uVar3 >> 2;
}

