/* Entry 0x089A92D0 | file offset 0x001A62A8 | FUN_089a92d0 | bytes 208 */

undefined4 FUN_089a92d0(uint *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = 0xffffffff;
  if ((code *)param_1[4] != (code *)0x0) {
    uVar3 = (*(code *)param_1[4])(param_1[2],param_2,4);
  }
  iVar5 = (int)uVar3 >> 0x1f;
  uVar4 = uVar3;
  if (0 < (int)uVar3) {
    iVar2 = 0x7fffffff - param_1[1];
    uVar4 = 0x80660001;
    if ((iVar5 <= iVar2) && ((iVar5 != iVar2 || (uVar3 <= -*param_1 - 1)))) {
      uVar4 = *param_1 + uVar3;
      *param_1 = uVar4;
      param_1[1] = param_1[1] + iVar5 + (uint)(uVar4 < uVar3);
      uVar4 = uVar3;
    }
  }
  uVar1 = 0x80660001;
  if (uVar4 == 4) {
    uVar1 = 0;
  }
  return uVar1;
}

