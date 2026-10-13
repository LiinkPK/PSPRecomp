/* Entry 0x089A8F0C | file offset 0x001A5EE4 | FUN_089a8f0c | bytes 684 */

undefined4 FUN_089a8f0c(uint *param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  cVar1 = *param_3;
  do {
    if (cVar1 == 0) {
      return 0;
    }
    param_3 = param_3 + 1;
    switch((int)cVar1) {
    case 0x44:
    case 100:
      uVar3 = 0xffffffff;
      if ((code *)param_1[4] != (code *)0x0) {
        uVar3 = (*(code *)param_1[4])(param_1[2],param_2,8);
      }
      if (0 < (int)uVar3) {
        iVar2 = (int)uVar3 >> 0x1f;
        iVar4 = 0x7fffffff - param_1[1];
        if ((iVar4 < iVar2) || ((iVar2 == iVar4 && (-*param_1 - 1 < uVar3)))) {
          uVar3 = 0x80660001;
        }
        else {
          uVar5 = *param_1 + uVar3;
          *param_1 = uVar5;
          param_1[1] = param_1[1] + iVar2 + (uint)(uVar5 < uVar3);
        }
      }
      param_2 = param_2 + 8;
      if (uVar3 != 8) {
        return 0x80660001;
      }
      break;
    default:
      return 0x80660001;
    case 0x4c:
    case 0x6c:
      uVar3 = 0xffffffff;
      if ((code *)param_1[4] != (code *)0x0) {
        uVar3 = (*(code *)param_1[4])(param_1[2],param_2,4);
      }
      if (0 < (int)uVar3) {
        iVar4 = (int)uVar3 >> 0x1f;
        iVar2 = 0x7fffffff - param_1[1];
        if ((iVar2 < iVar4) || ((iVar4 == iVar2 && (-*param_1 - 1 < uVar3)))) {
          uVar3 = 0x80660001;
        }
        else {
          uVar5 = *param_1 + uVar3;
          *param_1 = uVar5;
          param_1[1] = param_1[1] + iVar4 + (uint)(uVar5 < uVar3);
        }
      }
      param_2 = param_2 + 4;
      if (uVar3 != 4) {
        return 0x80660001;
      }
      break;
    case 0x53:
    case 0x73:
      uVar3 = 0xffffffff;
      if ((code *)param_1[4] != (code *)0x0) {
        uVar3 = (*(code *)param_1[4])(param_1[2],param_2,2);
      }
      if (0 < (int)uVar3) {
        iVar4 = (int)uVar3 >> 0x1f;
        iVar2 = 0x7fffffff - param_1[1];
        if ((iVar2 < iVar4) || ((iVar4 == iVar2 && (-*param_1 - 1 < uVar3)))) {
          uVar3 = 0x80660001;
        }
        else {
          uVar5 = *param_1 + uVar3;
          *param_1 = uVar5;
          param_1[1] = param_1[1] + iVar4 + (uint)(uVar5 < uVar3);
        }
      }
      param_2 = param_2 + 2;
      if (uVar3 != 2) {
        return 0x80660001;
      }
    }
    cVar1 = *param_3;
  } while( true );
}

