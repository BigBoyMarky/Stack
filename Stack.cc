#include "Stack.h"
#include <stdio.h>
#include <stdlib.h>

void Stack::push(int val) {

	append(val);

}

int Stack::pop() {

	ListNode* temphead = _head;

	if (temphead == NULL) {

		printf("Stack empty\n");
		return 0;

	}

	else {

		int ret;

		if (temphead->_next == NULL) {

			ret = temphead->_value;
			temphead = NULL;
			return ret;

		}

		ListNode* prev = temphead;

		while (temphead->_next != NULL) {

			prev = temphead;
			temphead = temphead->_next;

		}

		ret = temphead->_value;

		free(temphead);
		prev->_next = NULL;

		return ret;

	}

}
