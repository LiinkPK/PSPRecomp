/* Entry 0x088AB028 | file offset 0x000A8000 | FUN_088ab028 | bytes 280 */

void FUN_088ab028(int param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  iVar1 = 0;
  do {
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x1c);
    }
    else {
      iVar1 = *(int *)(iVar1 + 0x27c);
    }
    if (iVar1 == 0) {
      return;
    }
    iVar3 = *(int *)(iVar1 + 0xc0);
    if (*(int *)(iVar3 + 0x34) == 1) {
      if (*param_2 == 0) {
        uVar5 = param_2[1];
      }
      else {
        if ((*(uint *)(iVar3 + 0x54) & *param_2) == 0) {
          bVar2 = false;
          goto LAB_088ab0f8;
        }
        uVar5 = param_2[1];
      }
      if ((uVar5 == 0) || ((*(uint *)(iVar3 + 0x58) & uVar5) != 0)) {
        iVar7 = 0;
        puVar4 = (uint *)(iVar3 + 0x5c);
        puVar6 = param_2 + 2;
        do {
          if ((*puVar6 != 0) && ((*puVar4 & *puVar6) == 0)) {
            bVar2 = false;
            goto LAB_088ab0f8;
          }
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar7 < 2);
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
    }
    else {
      bVar2 = false;
    }
LAB_088ab0f8:
    if (bVar2) {
      FUN_088a6a78(iVar1);
    }
  } while( true );
}

